class Food:
    cost=None
    type= None
    def __init__(self, cost, type) -> None:
        self.cost= cost
        self.type= type
        
    def display(self):
        print(f"{self.type} of food costs {self.cost} BDT")
        
        
class Fruit(Food):
    def __init__(self, cost, type) :
        super().__init__(cost, type)
        
    def display(self):
        print("This is derived function")
        super().display()
        
cake= Food(30, "Dessert")
apple= Fruit(30, "Healthy")
# cake.display()
apple.display()