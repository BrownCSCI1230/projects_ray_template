#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>

/**
 * @class Camera
 *
 * An abstract class representing the interface of a virtual camera.
 * You should implement your own camera class conforming to this interface.
 */

class Camera {
public:
    // Returns the view matrix for the current camera settings.
    virtual glm::mat4x4 getViewMatrix() const = 0;

    // Returns the transformation matrix (the inverse of view matrix) for the current camera settings.
    virtual glm::mat4x4 getTransformationMatrix() const = 0;

    // Returns the aspect ratio of the camera.
    virtual float getAspectRatio() const = 0;

    // Returns the height angle in RADIAN of the camera.
    virtual float getHeightAngle() const = 0;

    // Returns the focal length of this camera.
    // This is for depth of field feature only,
    // You can ignore and don't implement this function if you are not intending to implement depth of field.
    virtual float getFocalLength() const { return 0.f; }

    // Returns the focal length of this camera.
    // This is for depth of field feature only,
    // You can ignore and don't implement this function if you are not intending to implement depth of field.
    virtual float getAperture() const { return 0.f; }


    virtual glm::vec4 getLook() const { return glm::vec4(0); }
};

#endif // CAMERA_H
