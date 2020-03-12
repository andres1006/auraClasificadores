INCLUDE_DIRECTORIES("${PROJECT_INCLUDE_DIR}")

SET(COMMON_SRCS 
	Clasificador_DFT_vs_control_emxAPI.c
    Clasificador_DFT_vs_control_emxutil.c
    Clasificador_DFT_vs_control_initialize.c
    Clasificador_DFT_vs_control_terminate.c
    Clasificador_DFT_vs_control.c
    CompactClassificationSVM.c
    Poly.c
    rt_nonfinite.c
    rtGetInf.c
    rtGetNaN.c)
				
ADD_EXECUTABLE(main main.c ${COMMON_SRCS})

TARGET_LINK_LIBRARIES(main m)
