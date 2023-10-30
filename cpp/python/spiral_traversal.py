l=[[1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]]
top=0
down=len(l)-1
left=0
right=len(l)-1
dir=0
while(top<=down and left<=right):
    if dir==0:
        for i in range(left,right+1):
            print(l[top][i],end=" ")
        top+=1
    elif dir==1:
        for i in range(top,down+1):
            print(l[i][right],end=" ")
        right-=1
    elif dir==2:
        for i in range(right,left-1,-1):
            print(l[down][i],end=" ")
        down-=1
    elif dir==3:
        for i in range(down,top-1,-1):
            print(l[i][left],end=" ")
        left+=1
    dir=(dir+1)%4