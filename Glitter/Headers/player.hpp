//
// Created by jalex on 5/19/2017.
//

#ifndef GLITTER_PLAYER_H
#define GLITTER_PLAYER_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

enum ModelMode{
    USE_VALS,
    USE_MATRIX,
};

class PlayerCam {
public:
    PlayerCam() : playerPos{glm::vec3(0)},
               playerRotation{glm::mat4()},
               cameraOffset{glm::vec3()},
               cameraRotateOffset{glm::mat4()},
               modelMode{USE_VALS}
    {

    }

    void rotateAround(const glm::vec3& focus, float radius, float height, float vary);

    void getMatrices(glm::mat4 projection, glm::mat4 view, glm::mat4 model, glm::mat4 normalModel);

private:

    // Disable Copying and Assignment
    PlayerCam(PlayerCam const &) = delete;

    PlayerCam &operator=(PlayerCam const &) = delete;

    glm::vec3 playerPos;
    glm::mat4 playerRotation;
    glm::vec3 cameraOffset;
    glm::mat4 cameraRotateOffset;
    glm::mat4 modelMatrix;
    ModelMode modelMode;
};

#endif //GLITTER_PLAYER_H
