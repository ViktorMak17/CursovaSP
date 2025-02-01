#include "Codegen.hpp"

namespace Codegen {
    void codegen(FILE* outFile, struct astNode* node) {
        if (node == 0) {
            return;
        }

        switch (node->type) {
        case program_node: {
            fprintf(outFile, "#include <stdio.h>\n#include <stdlib.h>\n\nint main() \n{\n");
            codegen(outFile, node->left);  // Оголошення змінних
            codegen(outFile, node->right); // Тіло програми
            fprintf(outFile, "   system(\"pause\");\n ");
            fprintf(outFile, "   return 0;\n}\n");
            break;
        }

        case var_node: {
            fprintf(outFile, "int ");
            codegen(outFile, node->left);
            fprintf(outFile, ";\n");
            codegen(outFile, node->right);
            break;
        }

        case number_node:
        case id_node: {
            fprintf(outFile, "%s", node->name);
            break;
        }

        case statement_node: {
            codegen(outFile, node->left);
            codegen(outFile, node->right);
			break;
        }
        case input_node: {
            fprintf(outFile, "printf(\"Enter ");
            codegen(outFile, node->left);
            fprintf(outFile, ": \");\n");
            fprintf(outFile, "scanf(\"%%d\", &");
            codegen(outFile, node->left);
            fprintf(outFile, ");\n");
            break;
        }

        case output_node: {
            fprintf(outFile, "printf(\"%%d\\n\", ");
            codegen(outFile, node->left);
			fprintf(outFile, ");\n");
            break;
        }

        case add_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " + ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case sub_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " - ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case mul_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " * ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case div_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " / ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case mod_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " %% ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case assign_node: {
			codegen(outFile, node->left);
            fprintf(outFile, " = ");
            codegen(outFile, node->right);
            fprintf(outFile, ";\n");
			break;
		}


        case if_node: {
            fprintf(outFile, "if (");
            codegen(outFile, node->left); // Condition
            fprintf(outFile, ") ");

            if (node->right == NULL || node->right->type != else_node) {
                // If the body is empty or there's no else, write an empty block
                fprintf(outFile, "{\n");
            }
            else {
                // If there is an else block, ensure it is properly handled
                struct astNode* ifBody = node->right->left; // Body of the if statement
                struct astNode* elseBody = node->right->right; // Body of the else statement

                if (ifBody != NULL) {
                    fprintf(outFile, "{\n");
                    codegen(outFile, ifBody);
                    fprintf(outFile, "}\n");
                }
                else {
                    fprintf(outFile, "{ }\n");
                }

                fprintf(outFile, "else ");
                if (elseBody != NULL) {
                    fprintf(outFile, "{\n");
                    codegen(outFile, elseBody);
                    fprintf(outFile, "}\n");
                }
                else {
                    fprintf(outFile, "{ }\n");
                }

                break;
            }

            if (node->right != NULL) {
                codegen(outFile, node->right); // Process any non-else content
            }
            fprintf(outFile, "}\n");
            break;
        }

        case else_node: {
            codegen(outFile, node->left);
            fprintf(outFile, "else ");
            fprintf(outFile, "{ \n");
            codegen(outFile, node->right);
            fprintf(outFile, "} \n");
            break;
        }

        case or_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " || ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case and_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " && ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case not_node: {
            fprintf(outFile, "!(");
            codegen(outFile, node->left);
            fprintf(outFile, ")");
            break;
        }

        case eq_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " == ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case neq_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " != ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case gr_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " > ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case ls_node: {
            fprintf(outFile, "(");
            codegen(outFile, node->left);
            fprintf(outFile, " < ");
            codegen(outFile, node->right);
            fprintf(outFile, ")");
            break;
        }

        case goto_node: {
            fprintf(outFile, "goto ");
			codegen(outFile, node->left);
            fprintf(outFile, ";\n");
            break;
        }

        case label_node: {
            codegen(outFile, node->left);
            fprintf(outFile, ":\n");
            break;
        }

        case for_node: {
            fprintf(outFile, "for(\n");
            codegen(outFile, node->left);
            fprintf(outFile, "\n) ");
            fprintf(outFile, "{\n");
			codegen(outFile, node->right);
            fprintf(outFile, "\n}");
            break;
        }

        case to_node: {
            codegen(outFile, node->left);
            codegen(outFile, node->left->left);
            fprintf(outFile, " <= ");
            codegen(outFile, node->right);
            fprintf(outFile, ";\n++");
            codegen(outFile, node->left->left);
            break;
        }

        case downto_node: {
            codegen(outFile, node->left);
            codegen(outFile, node->left->left);
            fprintf(outFile, " >= ");
            codegen(outFile, node->right);
            fprintf(outFile, ";\n--");
            codegen(outFile, node->left->left);
            break;
        }

        case while_node: {
            fprintf(outFile, "while(");
            codegen(outFile, node->left);
            fprintf(outFile, ") {\n");
			codegen(outFile, node->right);
			fprintf(outFile, "}\n");
            break;
        }
        
        case continue_node: {
            fprintf(outFile, "continue;\n");
            break;
        }

        case exit_node: {
            fprintf(outFile, "break;\n");
            break;
        }

        case repeat_node: {
            fprintf(outFile, "do {\n");
            codegen(outFile, node->left);
			fprintf(outFile, "} while(");
			codegen(outFile, node->right);
			fprintf(outFile, ");\n");
            break;
        }

        case compound_node: {
            fprintf(outFile, "{\n");
            codegen(outFile, node->left);
            codegen(outFile, node->right);
            fprintf(outFile, "}\n");
            break;
        }

        default: {
            exit(1);
            printf("Undescribed node type: %d\n", node->type);
            break;
        }
        }
    }
}