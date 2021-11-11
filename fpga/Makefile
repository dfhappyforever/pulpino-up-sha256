.PHONY: zedboard
zedboard:
	make -C pulpino-zedboard/ all
	@echo "Bitstream generation for ZedBoard finished."
.PHONY: icbv1board
icbv1board:
	make -C pulpino-icbv1board/ all
	@echo "Bitstream generation for icbv1board finished."
.PHONY: zedboard_clean
zedboard_clean:
	make -C pulpino-zedboard/ clean
	@echo "clean ZedBoard finished."
.PHONY: icbv1board_clean
icbv1board_clean:
	make -C pulpino-icbv1board/ clean
	make -C pulpino-icbv1board-2020/ clean
	@echo "clean icbv1board finished."
.PHONY: icbv1board-2020
icbv1board-2020:
	make -C pulpino-icbv1board-2020/ all
	@echo "Bitstream generation for icbv1board finished."
