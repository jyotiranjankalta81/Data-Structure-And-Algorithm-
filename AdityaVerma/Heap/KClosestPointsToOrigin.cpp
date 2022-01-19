

class Solution
{
public:
    struct compare
    {
        bool operator()(pair<float, pair<int, int>> p1, pair<float, pair<int, int>> p2)
        {
            if (p1.first == p2.first)
            {
                return p1.second.first > p2.second.first;
            }

            return p1.first < p2.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        // for closes we should use max-heap, but for this question we have choosen the min heap and have changed the compare       mechanism by creating our custom comparator

        priority_queue<pair<float, pair<int, int>>, vector<pair<float, pair<int, int>>>, compare> maxH;
        float sum = 0;
        vector<vector<int>> vec;

        for (int i = 0; i < points.size(); i++)
        {
            sum = pow(points[i][0], 2);
            sum += pow(points[i][1], 2);
            sum = sqrt(sum);
            cout << sum << endl
                 << endl;
            maxH.push({sum, {points[i][0], points[i][1]}});
            if (maxH.size() > k)
            {
                maxH.pop();
            }
            sum = 0;
        }

        while (!maxH.empty())
        {
            vec.push_back({maxH.top().second.first, maxH.top().second.second});
            maxH.pop();
        }
        return vec;
    }
};