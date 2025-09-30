price_product = int(input("Price of Product: "))
customer_payment = int(input("Customer Payment: "))
change = (price_product - customer_payment)

print(change)

change25 = int((change / 25))
change25plus = int((change - (change25 * 25)))
change25plus10 = int(change25plus / 10)
change25plus10plus5 = int((change25plus -(change25plus10 * 10)) / 5)
change25plus10plus5plus1 = int(((change25plus-(change25plus10 * 10)) -(change25plus10plus5 * 5)) / 1)

# print(change25)
# print(change25plus)
# print(change25plus10)
# print(change25plus10plus5)
# print(change25plus10plus5plus1)

toplam_adet = change25 + change25plus10 + change25plus10plus5 + change25plus10plus5plus1
print(toplam_adet)




