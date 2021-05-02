// A divide and conquer program in C/C++ to find the smallest distance from a
// given set of points.

#include<bits/stdc++.h>
using namespace std;
#define ll int

// A structure to represent a Point in 2D plane
struct Point
{
	int x, y,id;
};
int compareX(const void* a, const void* b)
{
	Point *p1 = (Point *)a, *p2 = (Point *)b;
	return abs (p1->x - p2->x);
}
int compareY(const void* a, const void* b)
{
	Point *p1 = (Point *)a, *p2 = (Point *)b;
	return abs (p1->y - p2->y);
}
ll dist(Point p1, Point p2)
{
	return abs(p1.x - p2.x)+abs(p1.y - p2.y);
}
ll bruteForce(Point P[], int n)
{
	ll max = 0;
	for (int i = 0; i < n; ++i)
		for (int j = i+1; j < n; ++j)
            {
                  cout<<P[i].id<<" "<<P[j].id<<" "<<dist(P[i], P[j])<<endl;
                  if (dist(P[i], P[j]) > max)
				max = dist(P[i], P[j]);
            }

	return max;
}
ll max(ll x, ll y)
{
	return (x > y)? x : y;
}
ll stripClosest(Point strip[], int size, ll d)
{
	ll max = d; // Initialize the minimum distance as d

	qsort(strip, size, sizeof(Point), compareY);
	for (int i = 0; i < size; ++i)
		for (int j = i+1; j < size && abs (strip[j].y - strip[i].y) >= max; ++j)
			if (dist(strip[i],strip[j]) >= max)
				max = dist(strip[i], strip[j]);

	return max;
}
ll closestUtil(Point P[], int n)
{
	if (n <= 3)
		return bruteForce(P, n);
	int mid = n/2;
	Point midPoint = P[mid];
	ll dl = closestUtil(P, mid);
	ll dr = closestUtil(P + mid, n-mid);
	ll d = max(dl, dr);
	Point strip[n];
	int j = 0;
	for (int i = 0; i < n; i++)
		if (abs(P[i].x - midPoint.x) >= d)
			strip[j] = P[i], j++;
	return max(d, stripClosest(strip, j, d) );
}
ll closest(Point P[], int n)
{
	qsort(P, n, sizeof(Point), compareX);

	// Use recursive function closestUtil() to find the smallest distance
	return closestUtil(P, n);
}

// Driver program to test above functions
int main()
{
      int n,d;
      cin>>n>>d;
	Point P[n+10] ;
	ll i,j;
	for(i=0;i<n;i++)
      {
            P[i].id=i;
                  cin>>P[i].x>>P[i].y;
      }

	printf("The smallest distance is %d ", closest(P, n));
	return 0;
}
