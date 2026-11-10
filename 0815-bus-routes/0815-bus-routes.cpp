class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes,
                              int source, int target) {

        if (source == target)
            return 0;

        // Map each bus stop to the buses serving it
        unordered_map<int, vector<int>> stopToBuses;

        for (int bus = 0; bus < routes.size(); bus++) {
            for (int stop : routes[bus]) {
                stopToBuses[stop].push_back(bus);
            }
        }

        queue<int> q;
        unordered_set<int> visitedStops;
        unordered_set<int> visitedBuses;

        q.push(source);
        visitedStops.insert(source);

        int busesTaken = 0;

        while (!q.empty()) {
            int size = q.size();
            busesTaken++;

            for (int i = 0; i < size; i++) {
                int stop = q.front();
                q.pop();

                // Check all buses available at this stop
                for (int bus : stopToBuses[stop]) {

                    if (visitedBuses.count(bus))
                        continue;

                    visitedBuses.insert(bus);

                    // Visit every stop on this bus route
                    for (int nextStop : routes[bus]) {

                        if (nextStop == target)
                            return busesTaken;

                        if (!visitedStops.count(nextStop)) {
                            visitedStops.insert(nextStop);
                            q.push(nextStop);
                        }
                    }
                }
            }
        }

        return -1;
    }
};