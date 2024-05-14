idf_component_register(SRCS "main.c"
							"ctrl/ir_rec_ctrl.c"
							"drivers/motor_drvr.c"
							"drivers/lcd_drvr.c"
							"misc/ir_rec_encoder.c"
							"misc/decode_image.c"
							"misc/jpeg_decoder.c"
							"misc/tjpgd.c"
							"misc/pretty_effect.c"
                    INCLUDE_DIRS "."
                    EMBED_FILES dog.jpg)
                    