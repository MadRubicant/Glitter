//
// Created by jalex on 5/19/2017.
//

#include "player.hpp"

void PlayerCam::rotateAround(const glm::vec3& focus, float radius, float height, float vary){
    modelMode = USE_MATRIX;
    glm::vec3 pos(radius * sin(vary), height, radius * cos(vary));
    modelMatrix = glm::lookAt(pos, focus, glm::vec3(0, 1, 0));
}

void PlayerCam::getMatrices(glm::mat4 projection,
                            glm::mat4 view,
                            glm::mat4 model,
                            glm::mat4 normalModel){

}