import time
print("{:-^14}".format("计时开始"))
starttime = time.perf_counter()
for i in range(101):
    timenow = time.perf_counter() - starttime
    print("\r{:.6f}s {:^3}%".format(timenow,i), end='')
    if i % 10 == 0:
        print("[{}->{}]".format("*"*(i//10),"."*((100-i)//10)),end = '')
    time.sleep(0.1)
print ("\n{:-^14}".format("计时结束"))