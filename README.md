# Euclidean-Algorithm

The Euclidean Algorithm is used for calculating the GCD (Greatest Common Divisor) aka HCF (Highest Common Factor) of two numbers.

The algorithm works as follows:

for example, a=48 and b=18, you want to find the HCF/GCD of 'a' and 'b'

(a=48)%(b=18)=(remainder=12)  [here, '%' means modulus which returns the remainder when 'a' is divided by 'b']

In the next step, we will give the value of 'a' to that of 'b'. [(a=48)-->(a=18)(value of b)] and we will also give the value of 'b' to that of 'remainder'. [(b=18)-->(b=12)(value of remainder)]

(a=18)%(b=12)=(remainder=6)

In the next step, we will give the value of 'a' to that of 'b'. [(a=18)-->(a=12)(value of b)] and we will also give the value of 'b' to that of 'remainder'. [(b=12)-->(b=6)(value of remainder)]

(a=12)%(b=6)=(remainder=0)

When the remainder comes out to be '0', then we can finally conlcude that the GCD/HCF of 'a'(a=48, orginally/initially) and 'b'(b=18, orginally/initially) is the last value of 'b' where remainder comes out to be '0', ie. (b=6), thus in this case GCD/HCF (48,18) = 6.
