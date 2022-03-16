# Bounding-Boxes
This program compute a minimum-sized axis-aligned bounding box (AABB) for a set of input 2D geometries. An AABB is a rectangle with sides parallel to the x-, y-axes which encloses some given geometries.

### 4 types of input: 
##### 1. R x y w h
R means it is a retangle, with x and y representing the corrdinates of the centre. w and h mean the width and height of the input rectangle. This type of input is using the function RectangleBB().
##### 2. C x y r
C means it is a circle, with x and y representing the corrdinates of the centre. r means the radius of the input circle. This type of input is using the function CircleBB().
##### 3. P n x1 y1 x2 y2 ...
P means it is a point, with n points going to be inputted. x and y mean the corrdinates of the points. This type of input is using the function PointSetBB().
##### 4. #
This indicates the end of the input.

### Output: x y w h
x and y are the coordinates of the center of the minimum-sized AABB, w and h show the size of the AABB.

FYI: This is a course assignment.
