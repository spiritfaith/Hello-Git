import random
r = random.randrange(1, 1000)
#暂时忽略以上两句的原理，只需要了解其结果
#引入随机数，然后每次执行程序,然后，每次执行程序的时候，r的值会不同

if r % 2 == 0:
    print(r, 'is even.')
else:
    print(r, 'is odd.')