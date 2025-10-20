# Project 4: Antialias

Please fill this out for Antialias only. The project handout can be found [here](https://cs1230.graphics/projects/ray/3).

## Output Comparison
Run the program with the specified `.ini` file to compare your output (it should automatically save to the correct path).
> If your program can't find certain files or you aren't seeing your output images appear, make sure to:<br/>
> 1. Set your working directory to the project directory
> 2. Set the command-line argument in Qt Creator to `template_inis/antialias/<ini_file_name>.ini`
> 3. Clone the `scenefiles` submodule. If you forgot to do this when initially cloning this repository, run `git submodule update --init --recursive` in the project directory

> Note: Once all images are filled in, the images should be the same size in the expected and student outputs. However, if the images are not the same size, the aliasing may appear different in the markdown preview, even if your outputs are correct. 

| File/Method To Produce Output | Expected Output | Your Output |
| :---------------------------------------: | :--------------------------------------------------: | :-------------------------------------------------: | 
| shadow_test_4spp_grid.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/shadow_test_4spp_grid.png) | ![Place shadow_test_4spp_grid.png in student_outputs/antialias/required folder](student_outputs/antialias/required/shadow_test_4spp_grid.png) |
| shadow_test_4spp_rand.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/shadow_test_4spp_rand.png) | ![Place shadow_test_4spp_rand.png in student_outputs/antialias/required folder](student_outputs/antialias/required/shadow_test_4spp_rand.png) |
| shadow_test_4spp_strat.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/shadow_test_4spp_strat.png) | ![Place shadow_test_4spp_strat.png in student_outputs/antialias/required folder](student_outputs/antialias/required/shadow_test_4spp_strat.png) |
| mirror_primitives_64spp_strat.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/mirror_primitives_64spp_strat.png) | ![Place mirror_primitives_64spp_strat.png in student_outputs/antialias/required folder](student_outputs/antialias/required/mirror_primitives_64spp_strat.png) |
| cube_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/cube_bilinear.png) | ![Place cube_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/cube_bilinear.png) |
| unit_checkerboard_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/unit_checkerboard_bilinear.png) | ![Place unit_checkerboard_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/unit_checkerboard_bilinear.png) |
| sphere_checkerboard_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/sphere_checkerboard_bilinear.png) | ![Place sphere_checkerboard_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/sphere_checkerboard_bilinear.png) |
| unit_checkerboard_mipmap_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/unit_checkerboard_mipmap_bilinear.png) | ![Place unit_checkerboard_mipmap_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/unit_checkerboard_mipmap_bilinear.png) |
| sphere_checkerboard_mipmap_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/sphere_checkerboard_mipmap_bilinear.png) | ![Place sphere_checkerboard_mipmap_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/sphere_checkerboard_mipmap_bilinear.png) |
| cone_checkerboard_mipmap_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/cone_checkerboard_mipmap_bilinear.png) | ![Place cone_checkerboard_mipmap_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/cone_checkerboard_mipmap_bilinear.png) |
| cylinder_checkerboard_mipmap_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/cylinder_checkerboard_mipmap_bilinear.png) | ![Place cylinder_checkerboard_mipmap_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/cylinder_checkerboard_mipmap_bilinear.png) |
| moire_checkerboard_mipmap_bilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/moire_checkerboard_mipmap_bilinear.png) | ![Place moire_checkerboard_mipmap_bilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/moire_checkerboard_mipmap_bilinear.png) |
| unit_checkerboard_trilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/unit_checkerboard_trilinear.png) | ![Place unit_checkerboard_trilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/unit_checkerboard_trilinear.png) |
| sphere_checkerboard_trilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/sphere_checkerboard_trilinear.png) | ![Place rsphere_checkerboard_trilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/sphere_checkerboard_trilinear.png) |
| cone_checkerboard_trilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/cone_checkerboard_trilinear.png) | ![Place cone_checkerboard_trilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/cone_checkerboard_trilinear.png) |
| cylinder_checkerboard_trilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/cylinder_checkerboard_trilinear.png) | ![Place cylinder_checkerboard_trilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/cylinder_checkerboard_trilinear.png) |
| moire_checkerboard_trilinear.ini |  ![](https://raw.githubusercontent.com/BrownCSCI1230/scenefiles/main/antialias/required_outputs/moire_checkerboard_trilinear.png) | ![Place moire_checkerboard_trilinear.png in student_outputs/antialias/required folder](student_outputs/antialias/required/moire_checkerboard_trilinear.png) |



## Design Choices

## Collaboration/References

## Known Bugs

## Extra Credit
