SELECT ROUND(AVG(IF(order_date=customer_pref_delivery_date,1,0))*100,2) immediate_percentage
FROM ( SELECT customer_id,
    order_date,
    customer_pref_delivery_date
    FROM Delivery
    WHERE ( customer_id ,order_date ) IN
                (SELECT customer_id,MIN(order_date) 
                FROM Delivery d
                GROUP BY customer_id) 
)firstOrders            