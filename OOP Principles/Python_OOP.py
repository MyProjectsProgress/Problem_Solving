class Item:
    def __init__(self, name: str, price: float, quantity = 0):    # MAGDIC METHOD

        # VALIDATIONS
        assert price >= 0, f"Price {price} should be greater than 0"
        assert quantity >= 0, f"Quantity {quantity} should be greater than 0"

        #ASSIGNING TO SELF OBJECT
        self.name =name
        self.quantity = quantity
        self.price = price

        def calculate_total_price(self):
            return self.price * self.quantity

        