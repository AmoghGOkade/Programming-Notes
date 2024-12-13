def addallpath(WList,u, d, visited, path,allpath):
  	visited[u]= True
  	path.append(u)
  	if u == d:
         L = path.copy()
         allpath.append(L)
  	else:
         for i in WList[u]:
             if visited[i[0]]== False:
                 addallpath(WList, i[0], d, visited, path, allpath)      	
  	path.pop()
  	visited[u]= False

# Following function returns a list of all paths from s to d
# Format of returned list:- [[s,...,d],[s,...,d],...]
def findallpath(WList,s,d):
    visited = {}
    allpath = []
    for v in WList.keys():
        visited[v] = False
    path = []
    addallpath(WList,s, d, visited, path,allpath)
    return(allpath)
