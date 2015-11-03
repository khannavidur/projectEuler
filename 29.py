# had to shift to python (c++ I am sorry :'( )
i=2
a =[]
while i<101:
	j = 2
	while j<101:
		if i**j not in a:
			a.append(i**j)
		j += 1
	i+=1
 
print len(a)
