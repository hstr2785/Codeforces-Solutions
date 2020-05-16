    def bear():
           n=input()
           l=list()
           y=0
           for i in n.split(" "):
                  l.append(int(i))
           while(l[0]<=l[1]):
                       l[0]=l[0]*3
                       l[1]=l[1]*2
                       y=y+1
           print(y)
    bear()
