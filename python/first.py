rungs=[1,3,5,10]
dist=2
rungs_added=0
for i in range(0,len(rungs)-1):
    print(rungs[i],rungs[i+1])
    if rungs[i+1]-rungs[i]>dist:
        rungs.insert(i+1,(rungs[i]+dist))
        rungs_added+=1
print(len(rungs))