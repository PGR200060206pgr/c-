//#include<iostream>
//using namespace std;
//struct point {
//    double x;
//    double y;
//};
//struct line {
//    double a;
//    double b;
//    double c;
//};
//struct face {
//    point A, B, C;
//};
//double Getpoint_distance(point p1, point p2) {
//    double dis = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
//    return dis;
//}
//double GetpointAndLine_distance(point p, line l) {
//    double dis = fabs(l.a * p.x + l.b * p.y + l.c) / sqrt(l.a * l.a + l.b * l.b);
//    return dis;
//}
//double getface_mianji(face f) {
//    double mianji = fabs((f.B.x - f.A.x) * (f.C.y * f.A.y) - (f.B.y - f.A.y) * (f.C.x - f.A.x)) / 2;
//    return mianji;
//}
//double getmianji(point p1, point p2, point p3) {
//    double mianji = fabs((p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x)) / 2;
//    return mianji;
//}
//
//void outpdis(double dis, point p1, point p2) {
//
//    printf("两点point1(%.2lf,%.2lf)和point2(%.2lf,%.2lf)之间的距离为：%.2lf\n", p1.x, p1.y, p2.x, p2.y, dis);
//}
//void outldis(double dis, point p, line l) {
//    printf("点point(%.2lf,%.2lf)和直线line%.2lfx+%.2lfy+%.2lf=0的距离为：%.2lf\n", p.x, p.y, l.a, l.b, l.c, dis);
//}
//void outmianji(double mianji, face f) {
//    printf("面f的面积是：%.2lf\n", mianji);
//}
//bool ispointinface(point p, face f) {
//    double s1, s2, s3, s;
//    s1 = getmianji(p, f.A, f.B);
//    s2 = getmianji(p, f.B, f.C);
//    s3 = getmianji(p, f.C, f.A);
//    s = getface_mianji(f);
//    if (s1 + s2 + s3 == s) {
//        return true;
//    }
//    else {
//        return false;
//        
//    }
//}
//int main() {
//    int n;
//    cout << "你期望干啥，请输入对应的代号\n（\t1：两点间距离\t2:“线”段的长度，固定点到线的距离\t3:“面”的面积，面是否包含固定点(边界作为面内部的点））\n";
//    cin >> n;
//    switch (n) {
//    case 1: {
//        cout << "请输入第一个点的坐标(spacebar切换至y坐标）：";
//        double x1, y1;
//        cin >> x1 >> y1;
//        cout << "请输入第二个点的坐标(spacebar切换至y坐标）：";
//        double x2, y2;
//        cin >> x2 >> y2;
//        point p1, p2;
//        p1.x = x1;
//        p1.y = y1;
//        p2.x = x2;
//        p2.y = y2;
//        double dis1 = Getpoint_distance(p1, p2);
//        outpdis(dis1, p1, p2);
//        break;
//    }
//    case 2: {
//        cout << "请输入点的坐标(spacebar切换至y坐标）：";
//        double x1 = 0.0, y1 = 0.0;
//        point p;
//        cin >> x1 >> y1;
//        p.x = x1;
//        p.y = y1;
//        cout << "请按照如下格式分别输入直线参数方程的参数（Ax+By+C=0）(spacebar切换至下一个参数)：";
//        line l;
//        cin >> l.a >> l.b >> l.c;
//        double dis2 = GetpointAndLine_distance(p, l);
//        outldis(dis2, p, l);
//        break;
//    }
//    case 3:
//    {
//        cout << "请输入面的第一个点的坐标(spacebar切换至y坐标）：";
//        double x1, y1;
//        cin >> x1 >> y1;
//        cout << "请输入面的第二个点的坐标(spacebar切换至y坐标）：";
//        double x2, y2;
//        cin >> x2 >> y2;
//        cout << "请输入面的第三个点的坐标(spacebar切换至y坐标）：";
//        double x3, y3;
//        cin >> x3 >> y3;
//        face f;
//        f.A.x = x1;
//        f.A.y = y1;
//        f.B.x = x2;
//        f.B.y = y2;
//        f.C.x = x3;
//        f.C.y = y3;
//        cout << "请输入点的坐标(spacebar切换至y坐标）：";
//        double x4, y4;
//        cin >> x4 >> y4;
//        point p;
//        p.x = x4;
//        p.y = y4;
//        double mianji = getface_mianji(f);
//        outmianji(mianji, f);
//        bool a=ispointinface(p,f);
//        if(a)
//            cout<<"点point(%.2lf,%.2lf)在面中\n",p.x,p.y;
//        else
//            cout<<"点point(%.2lf,%.2lf)不在面中\n",p.x,p.y;
//        break;
//    }
//    }
//    return 0;
//}
