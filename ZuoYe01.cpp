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
//    printf("����point1(%.2lf,%.2lf)��point2(%.2lf,%.2lf)֮��ľ���Ϊ��%.2lf\n", p1.x, p1.y, p2.x, p2.y, dis);
//}
//void outldis(double dis, point p, line l) {
//    printf("��point(%.2lf,%.2lf)��ֱ��line%.2lfx+%.2lfy+%.2lf=0�ľ���Ϊ��%.2lf\n", p.x, p.y, l.a, l.b, l.c, dis);
//}
//void outmianji(double mianji, face f) {
//    printf("��f������ǣ�%.2lf\n", mianji);
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
//    cout << "��������ɶ���������Ӧ�Ĵ���\n��\t1����������\t2:���ߡ��εĳ��ȣ��̶��㵽�ߵľ���\t3:���桱����������Ƿ�����̶���(�߽���Ϊ���ڲ��ĵ㣩��\n";
//    cin >> n;
//    switch (n) {
//    case 1: {
//        cout << "�������һ���������(spacebar�л���y���꣩��";
//        double x1, y1;
//        cin >> x1 >> y1;
//        cout << "������ڶ����������(spacebar�л���y���꣩��";
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
//        cout << "������������(spacebar�л���y���꣩��";
//        double x1 = 0.0, y1 = 0.0;
//        point p;
//        cin >> x1 >> y1;
//        p.x = x1;
//        p.y = y1;
//        cout << "�밴�����¸�ʽ�ֱ�����ֱ�߲������̵Ĳ�����Ax+By+C=0��(spacebar�л�����һ������)��";
//        line l;
//        cin >> l.a >> l.b >> l.c;
//        double dis2 = GetpointAndLine_distance(p, l);
//        outldis(dis2, p, l);
//        break;
//    }
//    case 3:
//    {
//        cout << "��������ĵ�һ���������(spacebar�л���y���꣩��";
//        double x1, y1;
//        cin >> x1 >> y1;
//        cout << "��������ĵڶ����������(spacebar�л���y���꣩��";
//        double x2, y2;
//        cin >> x2 >> y2;
//        cout << "��������ĵ������������(spacebar�л���y���꣩��";
//        double x3, y3;
//        cin >> x3 >> y3;
//        face f;
//        f.A.x = x1;
//        f.A.y = y1;
//        f.B.x = x2;
//        f.B.y = y2;
//        f.C.x = x3;
//        f.C.y = y3;
//        cout << "������������(spacebar�л���y���꣩��";
//        double x4, y4;
//        cin >> x4 >> y4;
//        point p;
//        p.x = x4;
//        p.y = y4;
//        double mianji = getface_mianji(f);
//        outmianji(mianji, f);
//        bool a=ispointinface(p,f);
//        if(a)
//            cout<<"��point(%.2lf,%.2lf)������\n",p.x,p.y;
//        else
//            cout<<"��point(%.2lf,%.2lf)��������\n",p.x,p.y;
//        break;
//    }
//    }
//    return 0;
//}
