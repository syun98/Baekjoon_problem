a, b = map(int, input().split())
if b<45:
    if(a==0):
        print(23, b-45+60)
    else:
        print(a-1, b-45+60)
else:
    print(a, b-45)