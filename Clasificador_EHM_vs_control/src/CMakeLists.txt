INCLUDE_DIRECTORIES("${PROJECT_INCLUDE_DIR}")

SET(COMMON_SRCS 
	Clasificador_EHM_vs_control.c
	Clasificador_EHM_vs_control_emxAPI.c
	Clasificador_EHM_vs_control_emxutil.c
	Clasificador_EHM_vs_control_initialize.c
	Clasificador_EHM_vs_control_terminate.c
    ClassificationKNN.c
    eps.c
    knnsearch.c
    main.c
    rtGetInf.c
    rtGetNaN.c
    rt_nonfinite.c
    sort1.c
    sortIdx.c
    )
				
ADD_EXECUTABLE(main main.c ${COMMON_SRCS})

TARGET_LINK_LIBRARIES(main m)
