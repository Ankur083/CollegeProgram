class car:
    
    @staticmethod
    def start():
        print("car started..")

    @staticmethod
    def stop():
        print("car stopped..")

class Toyotacar(car):
    def _init_(self,brand):
        self.brand=brand

class fortuner(Toyotacar):
    def __init__(self,type):
        self.type=type

car1=fortuner("diseal")
car1.start()
    






