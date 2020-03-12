INCLUDE_DIRECTORIES("${PROJECT_INCLUDE_DIR}")

SET(COMMON_SRCS 
	Clasificador_Parkinson_vs_control.c
	Clasificador_Parkinson_vs_control_emxAPI.c
	Clasificador_Parkinson_vs_control_emxutil.c
	Clasificador_Parkinson_vs_control_initialize.c
	Clasificador_Parkinson_vs_control_terminate.c
    CompactSVM.c
    Poly.c
    rtGetInf.c
    rtGetNaN.c
    rt_nonfinite.c)
				
ADD_EXECUTABLE(main main.c ${COMMON_SRCS})

TARGET_LINK_LIBRARIES(main m)
