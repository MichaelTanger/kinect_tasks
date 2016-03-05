/*
 * Created by 郭嘉丞 on 15/9/12.
 * Last edited by sugar10w, 2016.2.24
 *
 * Kinect标定数据
 *
 * 三维点(X,Y,Z). 与其二维投影 (px,py)关系是
 * P * [X,Y,Z,1] = [x,y,k] = k*[px,py,1]
 *
 */

#include "kinect2pcl/kinect_parameters.h"

namespace tinker {
namespace vision {    

double depthToZ[2] = {446.50072208, -3.81086495};
double projectionParameter[3][4] = {
//        {-3.24164382e-02, -1.04860576e-03, 2.32010121e-02, 9.97794984e-01},
//        {-2.18961293e-04, -3.30200458e-02, 1.99508316e-02, 3.64211223e-02},
//        {-1.11424893e-06, -3.74821199e-06, 9.04515172e-05, 2.12172341e-04}
//};  //the projection matrix values

        {-3.21336365e-02, -1.08473226e-03, 2.30404510e-02, 9.97689752e-01},
        {-1.05322241e-04, -3.28787017e-02, 1.98148530e-02, 3.97094387e-02},
        {-5.34936492e-07, -3.88027987e-06, 8.98180131e-05, 2.28974662e-04}
};  //the projection matrix values

}
}
