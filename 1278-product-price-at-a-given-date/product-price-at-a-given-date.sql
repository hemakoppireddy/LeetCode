select p.product_id, COALESCE(pr.new_price, 10) as price
from (select distinct product_id from Products) p
left join Products pr
    on p.product_id = pr.product_id
    and pr.change_date <= '2019-08-16'
where
    pr.change_date = (
        select MAX(change_date)
        from Products
        where product_id = p.product_id and change_date <= '2019-08-16'
    )
    or pr.change_date is null;
