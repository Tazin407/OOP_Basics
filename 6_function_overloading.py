# python e eta mainly support kore na but-

class Sum:
    # ek e function diye multiple argument nite parbo
    def add(self, *args):
        ans=0
        for x in args:
            ans+=x
        return ans
    
    

a= Sum.add(3,4)
b= Sum.add(8,4,5)
print(a)
print(b)