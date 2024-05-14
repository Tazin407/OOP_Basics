class Food:
    cost= None
    type= None
    def __init__(self, cost, type) -> None:
        self.cost= cost
        self.type= type
        
    def __str__(self) -> str:
        return f"{self.type} type of food costs {self.cost} BDT"
    
class Product:
    amount= None
    
    def display(self):
        print("Products need to be sold")
        
class Dessert(Food, Product):
    pass

cake= Dessert(20, "Sweet")
cake.display()
print(cake)

# Output 
# Products need to be sold
# Sweet type of food costs 20 BDT