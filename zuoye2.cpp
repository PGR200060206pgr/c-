//#include<iostream>
//using namespace std;
//class Point {
//public:
//	double x, y;
//public:
//	void getPoint() {
//		cout << "�������ĺ������꣨spacebar�л���\n";
//		double a=0.0, b=0.0;
//        cin >> a >> b;
//        x = a;
//        y = b;
//	}
//}; 
//double getpoint_distance(Point p1, Point p2) {
//	double dis = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
//	return dis;
//}
//void showPointdis(double dis, Point p1, Point p2) {
//	printf("�㣨%.2lf,%.2lf����㣨%.2lf,%.2lf�������Ϊ��%.2lf", p1.x, p1.y, p2.x, p2.y, dis);
//}
//class line {
//public:
//        Point p1, p2;
//    public:
//        void getline() {
//            cout << "�������߶ε������˵㣨spacebar�л���\n";
//            double a=0.0, b=0.0, c=0.0, d=0.0;
//            cin >> a >> b >> c >> d;
//            p1.x = a;
//            p1.y = b;
//            p2.x = c;
//            p2.y = d;
//        }
//};
//double GetpointAndLine_distance(Point p, line l) {
//    double a, b, c;
//    a=(l.p2.y - l.p1.y)/(l.p2.x-l.p1.x);
//    b=-1;
//    c=l.p1.y-a*l.p1.x;
//    double dis = fabs(a*p.x+b*p.y+c) / sqrt(a*a+b*b);
//    return dis;
//}
//void showPointAndLine_distance(double dis, Point p, line l) {
//    printf("�㣨%.2lf,%.2lf�����߶Σ�%.2lf,%.2lf���루%.2lf,%.2lf���ľ���Ϊ��%.2lf", p.x, p.y, l.p1.x, l.p1.y, l.p2.x, l.p2.y, dis);
//}
//class face {
//    public:
//        Point p1, p2, p3;
//public:
//        void getface() {
//            cout << "�����������ε��������㣨spacebar�л���\n";
//            double a=0.0, b=0.0, c=0.0, d=0.0, e=0.0, f=0.0;
//            cin >> a >> b >> c >> d >> e >> f;
//            p1.x = a;
//            p1.y = b;
//            p2.x = c;
//            p2.y = d;
//            p3.x = e;
//            p3.y = f;
//        }
//};
//double getface_mianji(face f) {
//    double x1=0, x2=0, y1=0, y2 = 0;
//    if (f.p1.x == f.p2.x) {
//        x1 = f.p3.x - f.p1.x;
//        y1 = f.p3.y - f.p1.y;
//        x2 = f.p2.x - f.p1.x;
//        y2 = f.p2.y - f.p1.y;
//    }
//    x1 = f.p2.x - f.p1.x;
//    y1 = f.p2.y - f.p1.y;
//    x2 = f.p3.x - f.p1.x;
//    y2 = f.p3.y - f.p1.y;
//    double minaji = (x1 * y2 - x2 * y1) / 2;
//    return minaji;
//}
//double getmianji(Point p1, Point p2, Point p3) {
//    double mianji = fabs((p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x)) / 2;
//    return mianji;
//}
//bool ispointinface(Point p, face f) {
//    double s1, s2, s3, s;
//    s1 = getmianji(p, f.p1, f.p2);
//    s2 = getmianji(p, f.p2, f.p3);
//    s3 = getmianji(p, f.p1, f.p3);
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
//        case 1: {
//           Point p1, p2;
//           p1.getPoint();
//           p2.getPoint();
//           double dis = getpoint_distance(p1, p2);
//           showPointdis(dis, p1, p2);
//            break;
//        }
//              case 2: {
//                  line l;
//                  Point p;
//                  l.getline();
//                  p.getPoint();
//                  double dis = GetpointAndLine_distance(p, l);
//                  showPointAndLine_distance(dis, p, l);
//                  break;
//              }
//                case 3: {
//                    face f;
//                    f.getface();
//                    Point p;
//                    p.getPoint();
//                    double mianji = getface_mianji(f);
//                    cout << "�����Ϊ��" << mianji;
//                    if (ispointinface(p, f)) {
//                        cout << "��������";
//                    }
//                    else {
//                        cout << "��������";
//                    }
//                    break;
//                }
//    }
//}