class order:
    def __init__(self,item,price):
        self.item=item
        self.price=price

    def __gt__(self,order2):
        return self.price>order2.price


order1=order("pizza",500)
order2=order("burger",200)
print(order1>order2)
