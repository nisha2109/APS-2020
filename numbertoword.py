def number_to_words(n):
	ones=['Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine','Ten','Eleven','Twelve','Thirteen','Fourteen','Fifteen','Sixteen','Seventeen','Eighteen','Nineteen']
	tens=['Twenty','Thirty','Forty','Fifty','Sixty','Seventy','Eighty','Ninety']
	powers={100:'Hundred',1000:'Thousand',1000000:'Million',1000000000:'Billion'}
	if(n<20):
		return(ones[n])
	if(n<100):
		return tens[(int)(n/10)-2]+('' if n%10==0 else ' ' +ones[n%10])
	p=max([key for key in powers.keys() if key<=n])
	return number_to_words((int)(n/p))+' '+powers[p]+('' if n%p==0 else ' '+number_to_words(n%p))
t=int(input())
for _ in range(t):
	n=int(input())
	print(number_to_words(n))
