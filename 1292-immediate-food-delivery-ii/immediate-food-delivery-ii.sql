with firstorders as (
    select customer_id, customer_pref_delivery_date, order_date
    from delivery d1
    where order_date = ( select min(order_date) from delivery d2
        where d2.customer_id = d1.customer_id)
)
select round(100.0 * sum(case when customer_pref_delivery_date = order_date then 1 else 0 end) / count(*), 2) as immediate_percentage
from firstorders;
