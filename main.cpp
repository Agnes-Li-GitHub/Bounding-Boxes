#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void RectangleBB(double &xmin, double &xmax, double &ymin, double &ymax){
    double r_x, r_y, r_width, r_height;
    cin >> r_x >> r_y >> r_width >> r_height;
    // update all 4 variables if they are smaller or larger than the current one
    if ((r_x - r_width/2) < xmin){
        xmin = r_x - r_width/2;}
    if ((r_x + r_width/2) > xmax){
        xmax = r_x + r_width/2;}
    if ((r_y - r_height/2) < ymin){
         ymin = r_y - r_height/2;}
    if ((r_y + r_height/2) > ymax){
        ymax = r_y + r_height/2;}
}

void CircleBB(double &xmin, double &xmax, double &ymin, double &ymax){
    double c_x, c_y, c_radius;
    cin >> c_x >> c_y >> c_radius;
    // update all 4 variables if they are smaller or larger than the current one
    if ((c_x - c_radius) < xmin){
        xmin = c_x - c_radius;}
    if ((c_x + c_radius) > xmax){
        xmax = c_x + c_radius;}
    if ((c_y - c_radius) < ymin){
        ymin = c_y - c_radius;}
    if ((c_y + c_radius) > ymax)
        ymax = c_y + c_radius;}

void PointSetBB(double &xmin, double &xmax, double &ymin, double &ymax){
    int n,i;
    cin >> n;
    double p_x,p_y;
    for (i=0;i<n;i++){
        cin >> p_x >> p_y;
        // update all 4 variables if they are smaller or larger than the current one
        if (p_x > xmax) {
            xmax = p_x;}  
        if (p_x < xmin) {
            xmin = p_x;}  
        if (p_y > ymax) {
            ymax = p_y;}  
        if (p_y < ymin) {
            ymin = p_y;}  
    }
}

int main()
{
    double ans_x, ans_y, ans_width, ans_height;
    // set min to be the maximum values double can whole, so we can always change the value based on input
    double xmin = numeric_limits<double>::max();
    double xmax = numeric_limits<double>::lowest();
    double ymin = numeric_limits<double>::max();
    double ymax = numeric_limits<double>::lowest();
    char letter;
    cin >> letter;
    while (letter != '#'){
        if (letter=='R'){
        RectangleBB(xmin, xmax, ymin, ymax);}
        else if (letter=='C'){
            CircleBB(xmin, xmax, ymin, ymax);}
        else{
            PointSetBB(xmin, xmax, ymin, ymax);} 
    cin >> letter;
    }
    
    ans_x = (xmin + xmax)/2;
    ans_y = (ymin + ymax)/2;
    ans_width = xmax - xmin;
    ans_height = ymax - ymin;
    cout << ans_x << " " << ans_y << ' ' << ans_width << " " << ans_height << endl;
    return 0;
}
