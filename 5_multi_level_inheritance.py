class Product:
    amount=None
    def __init__(self,amount) -> None:
        self.amount= amount
        
    def display(self):
        print("Products need to be sold")
        
class Food(Product):
    type= None
    def __init__(self, amount, type) -> None:
        self.type= type
        super().__init__(amount)
        
    def show(self):
        print("Food is important")
        
class Cake(Food):
    flavour= None
    def __init__(self, amount, type, flavour) -> None:
        self.flavour= flavour
        super().__init__(amount, type)
    
    def taste(self):
        print("Yummy")
        
blackForest= Cake(20, "Dessert", "Chocolate")
blackForest.display()
blackForest.show()
blackForest.taste()
print(blackForest.type)
