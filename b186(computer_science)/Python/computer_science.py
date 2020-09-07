from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    cookies, chocolates, cakes = map(int, line.split())
    chocolates += min(cookies // 10, cakes // 2)
    stdout.write(f'{cookies} 個餅乾，{chocolates} 盒巧克力，{cakes} 個蛋糕。\n')
