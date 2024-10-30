sugar = int(input())

cnt = 0

while sugar > 0:  
    
    if sugar % 5 == 0:
        sugar -= 5
        cnt += 1
    elif sugar >= 3:  
    
        sugar -= 3
        cnt += 1
    else:
        print(-1)
        break
else:    
    print(cnt)
