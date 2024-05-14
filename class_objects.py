
class Food:
    # private
    __cost= None
    __type= None
    def __init__(self, cost, type) -> None:
        self.__cost= cost
        self.__type= type 
        
    def __str__(self) -> str:
        print("hello")
        return f"{self.__type} of food costs {self.__cost} BDT"
    

cake= Food(20, "dessert" )
print(cake)