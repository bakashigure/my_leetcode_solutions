#if 0

/* DFS 内存开销有点大..
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Employee {
public:
	int id;
	int importance;
	vector<int> subordinates;
	Employee(int a, int b, vector<int> c) :id(a), importance(b), subordinates(c) {};
};

class Solution {
public:
	int sum = 0;
	map<int, Employee*> m;
	int dfs(vector<Employee*> employees, int id)
	{
		sum += m[id]->importance;
		for (auto emp : m[id]->subordinates)
		{
			dfs(employees, emp);
		}
		return 0;
	}

	int getImportance(vector<Employee*> employees, int id) {
		for (Employee* emp : employees)
		{
			m.insert({ emp->id, emp });
		}
		dfs(employees, id);
		return sum;
	}
};


int main()
{
	vector<Employee*> emps;
	emps.push_back(new Employee({ 1, 5, { 2,3 } }));
	emps.push_back(new Employee({ 2,3,{} }));
	emps.push_back(new Employee({ 3,3,{} }));
	int wantId = 1;
	Solution s;
	int res = s.getImportance(emps, wantId);
	cout << res;
	return 0;
}

#endif