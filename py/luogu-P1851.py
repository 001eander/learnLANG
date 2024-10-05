def memorize(f):
  cache = {}
  def wrap(*args):
    if args not in cache:
      cache[args] = f(*args)
    return cache[args]
  return wrap

@memorize
def getDivSum(n):
  ans, i = 1, 2
  while i * i <= n:
    if n % i == 0:
      ans += i + n // i
      if i * i == n:
        ans -= i
    i += 1
  return ans

def main():
  a = int(input())
  while True:
    b = getDivSum(a)
    if a == getDivSum(b) and a != b:
      print(a, b)
      break
    a += 1

if __name__ == '__main__':
  main()