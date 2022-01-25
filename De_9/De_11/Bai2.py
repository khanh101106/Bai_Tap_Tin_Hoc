a=[0,4,1,0,5,5,4,1,0,0,100];c=0;d=[];e=[];h=[];k=[]
for i in range(1,len(a)+1):
	for j in range(i,len(a)-1):
		#print(i,j)
		c+=a[j]
		if c+a[j+1]<=sum(a[:i]):d.append(a[j])
		else:
			d.append(a[j])
			if (sum(a[:i])==sum(d)) and d!=[]:e.append(d);d=[];c=0
			else:e=[];d=[];c=0;break
	if e!=[]:e.insert(0,a[:i]);k.append(e);h.append(len(e));e=[]
for m in k:
	if len(m)==max(h):print(m);break
