def main():
    n=int(input())
    i=0
    while i<n:
        a=int(input())
        b=int(input())
        print(gcd(a,b))
        i=i+1

def gcd(a,b):
    if b==0:
        return a;
    return gcd(b,a%b)


if __name__ == '__main__':
    main()
