#victor njeri
#programming master..

def calculate_bill(customer_id, customer_name, units_consumed):
    charges_per_unit = 0
    total_amount = 0
    
    if units_consumed < 200:
        charges_per_unit = 1.20
    elif units_consumed < 400:
        charges_per_unit = 1.50
    elif units_consumed < 600:
        charges_per_unit = 1.80
    else:
        charges_per_unit = 2.00
    
    total_amount = units_consumed * charges_per_unit
    
    if total_amount > 400:
        total_amount *= 1.15
    
    if total_amount < 100:
        total_amount = 100
    
    print("Customer ID:", customer_id)
    print("Customer Name:", customer_name)
    print("Units Consumed:", units_consumed)
    print("Charges per Unit:", charges_per_unit)
    print("Total Amount to Pay:", total_amount)

# Taking input from the user
customer_id = input("Enter Customer ID: ")
customer_name = input("Enter Customer Name: ")
units_consumed = int(input("Enter Units Consumed: "))

# Calling the function to calculate the bill
calculate_bill(customer_id, customer_name, units_consumed)

