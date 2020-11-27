struct patient{
	char name[255];
	int day;
	char month[255];
	int year;
};

struct total{
	int totalPatient;
	int totalCure;
};
struct node {
  patient p;
  total t;
  node *left, *right;
};
