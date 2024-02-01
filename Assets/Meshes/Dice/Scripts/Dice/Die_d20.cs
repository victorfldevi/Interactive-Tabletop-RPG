using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Die_d20 : Die
{
    override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 1: return new Vector3(0.2F, -0.2F, 0.7F);
            case 2: return new Vector3(0.2F, -0.2F, -0.7F);
            case 3: return new Vector3(-0.2F, 0.6F, 0.4F);
            case 4: return new Vector3(-0.4F, -0.6F, -0.3F);
            case 5: return new Vector3(0.5F, -0.6F, 0F);
            case 6: return new Vector3(-0.7F, 0.1F, 0F);
            case 7: return new Vector3(0.6F, 0.2F, 0.4F);
            case 8: return new Vector3(-0.2F, 0.6F, -0.4F);
            case 9: return new Vector3(-0.6F, -0.2F, 0.4F);
            case 10: return new Vector3(0.4F, 0.6F, -0.3F);
            case 11: return new Vector3(-0.4F, -0.6F, 0.3F);
            case 12: return new Vector3(0.6F, 0.2F, -0.4F);
            case 13: return new Vector3(0.2F, -0.6F, 0.4F);
            case 14: return new Vector3(-0.6F, -0.2F, -0.4F);
            case 15: return new Vector3(0.7F, -0.1F, 0F);
            case 16: return new Vector3(-0.5F, 0.6F, 0F);
            case 17: return new Vector3(0.4F, 0.6F, 0.3F);
            case 18: return new Vector3(0.2F, -0.6F, -0.4F);
            case 19: return new Vector3(-0.2F, 0.2F, 0.7F);
            case 20: return new Vector3(-0.2F, 0.2F, -0.7F);
        }
        return Vector3.zero;
    }

    override protected float RotateTowards(int side)
    {
        switch (side)
        {
            case 1: return 300F;
            case 2: return 0F;
            case 3: return 203F;
            case 4: return 60F;
            case 5: return 150F;
            case 6: return 330F;
            case 7: return 160F;
            case 8: return 338F;
            case 9: return 160F;
            case 10: return 300F;
            case 11: return 240F;
            case 12: return 23F;
            case 13: return 203F;
            case 14: return 23F;
            case 15: return 210F;
            case 16: return 30F;
            case 17: return 120F;
            case 18: return 338F;
            case 19: return 180F;
            case 20: return 120F;
        }

        return -1;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Dice"))
        {
            Physics.IgnoreCollision(GetComponent<Collider>(), collision.gameObject.GetComponent<Collider>());
        }
    }
}
