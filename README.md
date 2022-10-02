# Bounding-Boxes
This program has 2 parts. The first part (1.cpp) computes a minimum-sized axis-aligned bounding box (AABB) for a set of input 2D geometries. An AABB is a rectangle with sides parallel to the x-, y-axes which encloses some given geometries. The second part (2.cpp) computes the axis-aligned boungind boxes (AABBs) for each of the input 2D geometries, and also identify the isolated AABBs which do not overlap with any other AABBs.

### 4 types of input: 
##### 1. R x y w h
R means it is a retangle, with x and y representing the corrdinates of the centre. w and h mean the width and height of the input rectangle. This type of input is using the function RectangleBB().
##### 2. C x y r
C means it is a circle, with x and y representing the corrdinates of the centre. r means the radius of the input circle. This type of input is using the function CircleBB().
##### 3. P n x1 y1 x2 y2 ...
P means it is a point, with n points going to be inputted. x and y mean the corrdinates of the points. This type of input is using the function PointSetBB().
##### 4. # Exit
This indicates the end of the input.

### 2 types of output 
##### 1. x y w h
This is for part 1. x and y are the coordinates of the center of the minimum-sized AABB, w and h show the size of the AABB.
##### 2. AABB **: xmin xmax ymin ymax
This is for part 2. For each of the input geometries, ** is a 2-digit ID (left padded with zeros) indicating which geometry this AABB corresponds to and display in order.
##### 3. Isolated AABBs: 
This is also for part 2. This outputs follows after output 2 and followed by the ID of the isolated AABBs on each subsequent line, in increasing order of the IDs.
