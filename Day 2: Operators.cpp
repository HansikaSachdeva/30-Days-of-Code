/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */


void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost*tip_percent/100;
    double tax = tax_percent*meal_cost/100;
    int total_cost = (int)round(meal_cost + tip + tax);
    cout<<total_cost;   
}
