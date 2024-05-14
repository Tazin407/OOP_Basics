class Animal:
    legs=None
    type=None
    
    def __init__(self, legs, type) -> None:
        self.legs= legs
        self.type= type
        
    def __str__(self) -> str:
        return f"{self.type} type of animal has {self.legs} legs"
    
    #python treats this as a regular function instead of class method
    def display(name):
        print(name)
        
cow= Animal(4, "herbivore")
cow.display() #this passes the name of the obj as parameter