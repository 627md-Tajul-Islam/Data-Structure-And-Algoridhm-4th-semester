1/ start

2/ input a,b,c

3/ d = b*b - 4*a*c

4/ if d>0 then
    x1 = (-b + sqrt(d)) / (2*a)
    x2 = (-b - sqrt(d)) / (2*a)
    print x1,x2
    if d = 0 then
        x = -b / (2*a)
        print x
    else
        print "no real roots"